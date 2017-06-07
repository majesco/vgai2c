'use strict';

var app = angular.module('app', [ 'ngRoute' ]);

app.config(['$routeProvider',
            function ( $routeProvider ) {

                $routeProvider.
                when('/led', {
                    templateUrl: 'led/led.view.html',
                    controller: 'LedController',
                    controllerAs: 'vm'
                }).
                otherwise({
                    redirectTo: '/led'
                });
            }]);
