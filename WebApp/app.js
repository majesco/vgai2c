'use strict';

var app = angular.module('app', [ 'ngRoute' ]);

app.config(['$routeProvider',
            function ( $routeProvider ) {

                $routeProvider.
                when('/led', {
                    templateUrl: 'led/led.view.html',   //URL posible de la pagina /led
                    controller: 'LedController',
                    controllerAs: 'vm'
                }).
                otherwise({
                    redirectTo: '/led'  //es el unico por defecto
                });
            }]);

