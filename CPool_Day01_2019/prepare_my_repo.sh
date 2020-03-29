#!/bin/bash

#! Create repository
blih -u leo.marcel@epitech.eu repository create $1

#! Add rights
blih -u leo.marcel@epitech.eu repository setacl $1 ramassage-tek r

#! See access rights depots
blih -u leo.marcel@epitech.eu repository getacl $1
