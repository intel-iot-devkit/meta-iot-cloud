/**
* Chart Tag Node
* Version 0.4
* Copyright (c) 2015 Intel Corp.

* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files (the "Software"), to deal
* in the Software without restriction, including without limitation the rights
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
* copies of the Software, and to permit persons to whom the Software is
* furnished to do so, subject to the following conditions:

* The above copyright notice and this permission notice shall be included in
* all copies or substantial portions of the Software.

* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL THE
* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
* OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
* THE SOFTWARE.
**/

module.exports = function(RED) {
    function ChartTagNode(config) {
        RED.nodes.createNode(this,config);
        var node = this;

        this.on('input', function(msg) {
	    var t = new Date();
	    var datum = [t.getTime(), msg.payload];

	    var chart = {
	    	title: config.title,
		id: config.title.replace(/ /g, '_'),
	    	chartType: config.chartType,
	    	dataSource: config.dataSource,
	    	units: config.units,
	    	min: config.min,
	    	max: config.max,
	    	targetLow: config.targetLow,
	    	targetHigh: config.targetHigh,
	    	datum: datum,
		points: config.points,
		priority: config.priority,
		sourcePriority: config.sourcePriority,
		ttl: config.ttl,
		nodeID: this.id
	    }
	    
	    msg.payload = chart;
            node.send(msg);
        });
    }
    RED.nodes.registerType("chart tag", ChartTagNode);
}
