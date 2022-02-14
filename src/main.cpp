#include <ros/ros.h>
#include <pluginlib/class_loader.h>
#include <plugin_study/base_study_plugin.hpp>

int main(int argc, char **argv)
{
  ros::init(argc, argv, "plugin_study");
  ros::NodeHandle nh;

  // plugin loader 생성
  pluginlib::ClassLoader<study_plugin::BaseStudyPlugin> plugin_loader("plugin_study", "study_plugin::BasePlugin");

  // plugin load
  boost::shared_ptr<study_plugin::BaseStudyPlugin> plugin = plugin_loader.createInstance("study_plugin::WarnPlugin");
  ROS_INFO("plugin name : %s", plugin->getName().c_str());

  while (ros::ok())
  {
    plugin->action();
    ros::Duration(1).sleep();
  }

  return 0;
}