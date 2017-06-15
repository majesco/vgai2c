'use strict';
module.exports = function(app) {
    var sendController = require('../controllers/sendController');


    // todoList Routes
    app.route('/send')
        .post(sendController.send);


};
