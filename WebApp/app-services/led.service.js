(function () {
    'use strict';

    angular
        .module('app')          //servicio para REST client de led
        .factory('LedService', LedService);

    LedService.$inject = ['$http', '$rootScope']; // http es para REST. rootscope es para valores globales
    function LedService($http, $rootScope) {
        var service = {};
        service.SendMessage =SendMessage;

        function SendMessage(data){     //Se conecta al ip del API
            var response= $http({
                method:"post",
                url: "http://192.168.0.111:3000/send",
                data: data              //Se envia el {"mensaje":"mensaje"}
            });
            return response;        //retorna el response del API.
        }
        
        return service;

    }
})();
