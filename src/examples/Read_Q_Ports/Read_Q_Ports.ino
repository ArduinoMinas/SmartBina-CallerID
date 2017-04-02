const int STQ = 3;   
 const int Q4 = A0;
 const int Q3 = A1;
 const int Q2 = A2;
 const int Q1 = A3;

void setup() {
  pinMode(STQ, INPUT);
  pinMode(Q4, INPUT);
  pinMode(Q3, INPUT);
  pinMode(Q2, INPUT);
  pinMode(Q1, INPUT);
}


void loop() {
	byte DTMFread;
	if(digitalRead(STQ)==HIGH){       //When a DTMF tone is detected, STQ will read HIGH for the duration of the tone.
		DTMFread=0;
		if(digitalRead(Q1)==HIGH){      //If Q1 reads HIGH, then add 1 to the DTMFread variable
		  DTMFread=DTMFread+1;
		}
		if(digitalRead(Q2)==HIGH){      //If Q2 reads HIGH, then add 2 to the DTMFread variable
		  DTMFread=DTMFread+2;
		}
		if(digitalRead(Q3)==HIGH){      //If Q3 reads HIGH, then add 4 to the DTMFread variable
		  DTMFread=DTMFread+4;
		}
		if(digitalRead(Q4)==HIGH){      //If Q4 reads HIGH, then add 8 to the DTMFread variable
		  DTMFread=DTMFread+8;
		}
	}
	Serial.print(DTMFread);
}