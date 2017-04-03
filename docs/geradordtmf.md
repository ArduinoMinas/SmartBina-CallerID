Gerador de Tons DTMF

  

		  <script src="/js/DTMFgenerator.js"></script>

		<p id="info">
		The Online Tone Generator can be used to create Dual Tone Multi Frequency (DTMF) signals commonly heard on telephone dial pads.
        Each tone is simply the sum of two sine waves. Click and hold the dial pad buttons to hear each tone.
        <!-- Each country uses slightly different frequencies; the ones on this page are from the UK. --><!-- See .S. Brown, ``A new method of tone identification'', Post Office Electrical Engineers' Journal 71(2) 117-121 (1978) for more details.http://www-users.cs.york.ac.uk/~fisher/telecom/tones/-->
		</p>

       
 


<table class="dialpad">
	<tbody><tr>
    	<td></td>
    	<td>1209Hz</td>
        <td>1336Hz</td>
        <td>1477Hz</td>
        <td>1633Hz</td>
    </tr>
	<tr>
    	<td>697Hz</td>
    	<td><button id="one" class="beginDial" onmousedown="dialTone(697.0, 1209.0)" onmouseup="stop()" data-freq="697.0, 1209.0">1</button></td>
        <td><button id="two" class="beginDial" onmousedown="dialTone(697.0, 1336.0)" onmouseup="stop()" data-freq="697.0, 1336.0">2</button></td>
        <td><button id="three" class="beginDial" onmousedown="dialTone(697.0, 1477.0)" onmouseup="stop()" data-freq="697.0, 1477.0">3</button></td>
        <td><button id="dtmf-a" class="beginDial" onmousedown="dialTone(697.0, 1633.0)" onmouseup="stop()" data-freq="697.0, 1633.0">A</button></td>
    </tr>
    <tr>
    	<td>770Hz</td>
    	<td><button id="four" class="beginDial" onmousedown="dialTone(770.0, 1209.0)" onmouseup="stop()" data-freq="770.0, 1209.0">4</button></td>
        <td><button id="five" class="beginDial" onmousedown="dialTone(770.0, 1336.0)" onmouseup="stop()" data-freq="770.0, 1336.0">5</button></td>
        <td><button id="six" class="beginDial" onmousedown="dialTone(770.0, 1477.0)" onmouseup="stop()" data-freq="770.0, 1477.0">6</button></td>
        <td><button id="dtmf-b" class="beginDial" onmousedown="dialTone(770.0, 1633.0)" onmouseup="stop()" data-freq="770.0, 1633.0">B</button></td>
    </tr>
	<tr>
    	<td>852Hz</td>
    	<td><button id="seven" class="beginDial" onmousedown="dialTone(852.0, 1209.0)" onmouseup="stop()" data-freq="852.0, 1209.0">7</button></td>
        <td><button id="eight" class="beginDial" onmousedown="dialTone(852.0, 1336.0)" onmouseup="stop()" data-freq="852.0, 1336.0">8</button></td>
        <td><button id="nine" class="beginDial" onmousedown="dialTone(852.0, 1477.0)" onmouseup="stop()" data-freq="852.0, 1477.0">9</button></td>
        <td><button id="dtmf-c" class="beginDial" onmousedown="dialTone(852.0, 1633.0)" onmouseup="stop()" data-freq="852.0, 1633.0">C</button></td>

    </tr>
	<tr>
    	<td>941Hz</td>
    	<td><button class="beginDial" onmousedown="dialTone(941.0, 1209.0)" onmouseup="stop()" data-freq="941.0, 1209.0">*</button></td>
        <td><button id="zero" class="beginDial" onmousedown="dialTone(941.0, 1336.0)" onmouseup="stop()" data-freq="941.0, 1336.0">0</button></td>
        <td><button class="beginDial" onmousedown="dialTone(941.0, 1477.0)" onmouseup="stop()" data-freq="941.0, 1477.0">#</button></td>
        <td><button id="dtmf-d" class="beginDial" onmousedown="dialTone(941.0, 1633.0)" onmouseup="stop()" data-freq="941.0, 1633.0">D</button></td>

    </tr>
</tbody></table>

<script type="text/javascript">

$('.dialpad button').on("touchstart", function(e){
    e.preventDefault();
    freqs = $(this).data("freq").split(",");
    dialTone(parseInt(freqs[0]), parseInt(freqs[1]));
});


$('body').on("touchend", function(e){
    e.preventDefault();
    stop();
});

$('body').on("mouseup", function(e){
    // e.preventDefault();
    stop();
});

</script> 