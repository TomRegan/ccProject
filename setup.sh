#!/usr/bin/env bash
# Collects input used to set up files for a new project

APP=MyApplication
echo -n "What is the name of the main class [$APP]: "
read UIN && [[ ! -z $UIN ]] && APP=$UIN
APP_LC=${APP,,}
APP_NS=$APP_LC::
echo -n "What is the namespace [$APP_LC]: "
read UIN && [[ ! -z $UIN ]] && APP_NS=$UIN::

echo "Main class: $APP"
echo "Namespace: $APP_NS"
