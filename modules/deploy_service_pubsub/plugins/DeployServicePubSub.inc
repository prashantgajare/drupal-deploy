<?php

class DeployServicePubSub implements DeployService {

  var $config = array();

  function __construct(Array $config = array()) {
    $this->config = $config;
  }

  function deploy(Array $entities) {
    print_r($entities);
  }

  function configForm(&$form_state) {
    return array();
  }

}