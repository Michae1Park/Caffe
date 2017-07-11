#!/usr/bin/env sh
# Compute the mean image from the imagenet training lmdb
# N.B. this is available in data/ilsvrc12

EXAMPLE=examples/my_mnist
DATA=data/mnist
TOOLS=build/tools

$TOOLS/compute_image_mean $EXAMPLE/mnist_train_lmdb \
  $DATA/mnist.binaryproto

echo "Done."
