(function () {
    'use strict';

    angular
        .module('app')          //servicio para las citas
        .factory('LedService', LedService);

    LedService.$inject = ['$http', '$rootScope']; //Sirve para todo lo concerniente a citas ver y crear
    function LedService($http, $rootScope) {
        var service = {};

        
        
        return service;

    }
})();
