#!/usr/bin/env sh
# Compute the mean image from the imagenet training lmdb
# N.B. this is available in data/ilsvrc12

EXAMPLE=examples/dog_id
DATA=data/dogs
TOOLS=build/tools

$TOOLS/compute_image_mean $EXAMPLE/dogs_train_lmdb \
  $DATA/dogidnet_mean.binaryproto

echo "Done."
