#include <caffe/caffe.hpp>
#ifdef USE_OPENCV
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#endif  // USE_OPENCV
#include <algorithm>
#include <iosfwd>
#include <memory>
#include <string>
#include <utility>
#include <vector>

#ifdef USE_OPENCV
using namespace caffe;  // NOLINT(build/namespaces)
using std::string;

int main () {
	model = 'deploy.prototxt';
	weights = 'net_4800.caffemodel';

	Caffe::set_mode(Caffe::CPU);
	caffe.set_device(0);

	net = caffe.Net(model, weights, 'test');	

	image = imread('example_4.png');
	res = net.forward({image});
	prob = res{1};
}
