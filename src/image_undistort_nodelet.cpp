#include <nodelet/nodelet.h>
#include <pluginlib/class_list_macros.h>

#include "image_undistort/image_undistort.h"

namespace image_undistort {

class ImageUndistortNodelet : public nodelet::Nodelet {
  virtual void onInit() {
    image_undistort_ = std::make_shared<ImageUndistort>(getNodeHandle(),
                                                        getPrivateNodeHandle());
  }

  std::shared_ptr<ImageUndistort> image_undistort_;
};
}

PLUGINLIB_EXPORT_CLASS(image_undistort::ImageUndistortNodelet, nodelet::Nodelet);
