<?php

interface DeployService {

  function __construct(Array $config = array());

  function deploy(Traversable $iterator);

  function setHeader($key, $value);

  function configForm(&$form_state);

}