/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core Unknown.
* Used org.franca.core Unknown.
*
* 
*/
#ifndef ORG_GENIVI_MEDIAMANAGER_Browser_H_
#define ORG_GENIVI_MEDIAMANAGER_Browser_H_




#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/types.h>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace org {
namespace genivi {
namespace mediamanager {

class Browser {
 public:
    virtual ~Browser() { }

    static inline const char* getInterfaceId();
    static inline CommonAPI::Version getInterfaceVersion();
};

const char* Browser::getInterfaceId() {
    static const char* interfaceId = "org.genivi.mediamanager.Browser";
    return interfaceId;
}

CommonAPI::Version Browser::getInterfaceVersion() {
    return CommonAPI::Version(1, 0);
}


} // namespace mediamanager
} // namespace genivi
} // namespace org

namespace CommonAPI {

}


namespace std {
    //hashes for types

    //hashes for error types
}

#endif // ORG_GENIVI_MEDIAMANAGER_Browser_H_