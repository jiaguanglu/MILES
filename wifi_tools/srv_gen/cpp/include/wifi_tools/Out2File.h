/* Auto-generated by genmsg_cpp for file /home/slam/catkin_ws/src/wifi_tools/srv/Out2File.srv */
#ifndef WIFI_TOOLS_SERVICE_OUT2FILE_H
#define WIFI_TOOLS_SERVICE_OUT2FILE_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"

#include "ros/service_traits.h"




namespace wifi_tools
{
template <class ContainerAllocator>
struct Out2FileRequest_ {
  typedef Out2FileRequest_<ContainerAllocator> Type;

  Out2FileRequest_()
  : req(0)
  {
  }

  Out2FileRequest_(const ContainerAllocator& _alloc)
  : req(0)
  {
  }

  typedef int8_t _req_type;
  int8_t req;


  typedef boost::shared_ptr< ::wifi_tools::Out2FileRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::wifi_tools::Out2FileRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct Out2FileRequest
typedef  ::wifi_tools::Out2FileRequest_<std::allocator<void> > Out2FileRequest;

typedef boost::shared_ptr< ::wifi_tools::Out2FileRequest> Out2FileRequestPtr;
typedef boost::shared_ptr< ::wifi_tools::Out2FileRequest const> Out2FileRequestConstPtr;



template <class ContainerAllocator>
struct Out2FileResponse_ {
  typedef Out2FileResponse_<ContainerAllocator> Type;

  Out2FileResponse_()
  : res(0)
  {
  }

  Out2FileResponse_(const ContainerAllocator& _alloc)
  : res(0)
  {
  }

  typedef int8_t _res_type;
  int8_t res;


  typedef boost::shared_ptr< ::wifi_tools::Out2FileResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::wifi_tools::Out2FileResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct Out2FileResponse
typedef  ::wifi_tools::Out2FileResponse_<std::allocator<void> > Out2FileResponse;

typedef boost::shared_ptr< ::wifi_tools::Out2FileResponse> Out2FileResponsePtr;
typedef boost::shared_ptr< ::wifi_tools::Out2FileResponse const> Out2FileResponseConstPtr;


struct Out2File
{

typedef Out2FileRequest Request;
typedef Out2FileResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct Out2File
} // namespace wifi_tools

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::wifi_tools::Out2FileRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::wifi_tools::Out2FileRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::wifi_tools::Out2FileRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "0813fe7539f367d34151c5a6cfd4dacd";
  }

  static const char* value(const  ::wifi_tools::Out2FileRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x0813fe7539f367d3ULL;
  static const uint64_t static_value2 = 0x4151c5a6cfd4dacdULL;
};

template<class ContainerAllocator>
struct DataType< ::wifi_tools::Out2FileRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "wifi_tools/Out2FileRequest";
  }

  static const char* value(const  ::wifi_tools::Out2FileRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::wifi_tools::Out2FileRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "int8 req\n\
\n\
";
  }

  static const char* value(const  ::wifi_tools::Out2FileRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::wifi_tools::Out2FileRequest_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::wifi_tools::Out2FileResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::wifi_tools::Out2FileResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::wifi_tools::Out2FileResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "6d19846d0d7a810f348cbbd2911abcef";
  }

  static const char* value(const  ::wifi_tools::Out2FileResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x6d19846d0d7a810fULL;
  static const uint64_t static_value2 = 0x348cbbd2911abcefULL;
};

template<class ContainerAllocator>
struct DataType< ::wifi_tools::Out2FileResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "wifi_tools/Out2FileResponse";
  }

  static const char* value(const  ::wifi_tools::Out2FileResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::wifi_tools::Out2FileResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "int8 res\n\
\n\
\n\
";
  }

  static const char* value(const  ::wifi_tools::Out2FileResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::wifi_tools::Out2FileResponse_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::wifi_tools::Out2FileRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.req);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct Out2FileRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::wifi_tools::Out2FileResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.res);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct Out2FileResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<wifi_tools::Out2File> {
  static const char* value() 
  {
    return "a1fed1837cc4ac5b3d3edf0194c323e1";
  }

  static const char* value(const wifi_tools::Out2File&) { return value(); } 
};

template<>
struct DataType<wifi_tools::Out2File> {
  static const char* value() 
  {
    return "wifi_tools/Out2File";
  }

  static const char* value(const wifi_tools::Out2File&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<wifi_tools::Out2FileRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "a1fed1837cc4ac5b3d3edf0194c323e1";
  }

  static const char* value(const wifi_tools::Out2FileRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<wifi_tools::Out2FileRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "wifi_tools/Out2File";
  }

  static const char* value(const wifi_tools::Out2FileRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<wifi_tools::Out2FileResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "a1fed1837cc4ac5b3d3edf0194c323e1";
  }

  static const char* value(const wifi_tools::Out2FileResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<wifi_tools::Out2FileResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "wifi_tools/Out2File";
  }

  static const char* value(const wifi_tools::Out2FileResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // WIFI_TOOLS_SERVICE_OUT2FILE_H

