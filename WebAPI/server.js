var express = require('express'),
    app = express(),
    port = process.env.PORT || 3000,
    bodyParser = require('body-parser'),
    cors = require('cors');



app.use(bodyParser.urlencoded({ extended: true }));
app.use(bodyParser.json());

// app.use(cors({origin: 'http://192.168.100.10:9000'}));
app.use(cors());



var routes = require('./api/routes/routeSend');
routes(app);


app.listen(port, "192.168.100.10");


console.log('todo list RESTful API server started on: ' + port);
