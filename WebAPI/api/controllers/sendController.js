'use strict';


var fs = require('fs');


exports.sendController = function(req, res) {

    console.log(req.body);
    res.json(req);
    };



