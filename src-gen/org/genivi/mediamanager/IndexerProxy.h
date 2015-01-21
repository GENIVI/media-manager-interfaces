/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core Unknown.
* Used org.franca.core Unknown.
*
* 
*/
/**
 * Indexer control interface. Allows administerial tasks for
                  the
 *  indexer backend, such as starting, stopping and requesting
                 
 *  status of the indexer.
                  For querying the database, please
 *  see
                  org.genivi.mediamanager.Browser
 */
#ifndef ORG_GENIVI_MEDIAMANAGER_Indexer_PROXY_H_
#define ORG_GENIVI_MEDIAMANAGER_Indexer_PROXY_H_

#include "IndexerProxyBase.h"


#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/AttributeExtension.h>
#include <CommonAPI/Factory.h>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace org {
namespace genivi {
namespace mediamanager {

template <typename ... _AttributeExtensions>
class IndexerProxy: virtual public Indexer, virtual public IndexerProxyBase
, public _AttributeExtensions... {
public:
    IndexerProxy(std::shared_ptr<CommonAPI::Proxy> delegate);
    ~IndexerProxy();

    typedef Indexer InterfaceType;


    /**
     * Get the current status of the indexer.
     */
    /**
     * Returns the wrapper class that provides access to the attribute indexerStatus.
     */
    virtual IndexerStatusAttribute& getIndexerStatusAttribute() {
        return delegate_->getIndexerStatusAttribute();
    }


    /**
     * Get the path to the database file in the host file system.
                        
     *   This is the database file used by LMS to store metadata
     * @param output: Path to database file in host file system
     * @deprecated This is only used for testing purposes and will be removed
     * 
     * Calls getDatabasePath with synchronous semantics.
     * 
    * All non-const parameters will be filled with the returned values.
     * The CallStatus will be filled when the method returns and indicate either
     * "SUCCESS" or which type of error has occurred. In case of an error, ONLY the CallStatus
     * will be set.
     */
    virtual COMMONAPI_DEPRECATED void getDatabasePath(CommonAPI::CallStatus& callStatus, std::string& output, Indexer::IndexerError& e);
    /**
     * Calls getDatabasePath with asynchronous semantics.
     * 
     * The provided callback will be called when the reply to this call arrives or
     * an error occurs during the call. The CallStatus will indicate either "SUCCESS"
     * or which type of error has occurred. In case of any error, ONLY the CallStatus
     * will have a defined value.
     * The std::future returned by this method will be fulfilled at arrival of the reply.
     * It will provide the same value for CallStatus as will be handed to the callback.
     */
    virtual std::future<CommonAPI::CallStatus> getDatabasePathAsync(GetDatabasePathAsyncCallback callback);
    /**
     * If the indexer is currently IDLE or RUNNING
                          (see
     *  IndexerStatus), stop indexing and set IndexerStatus
                          to
     *  STOPPED.
                          If indexer is currently STOPPED, no action is
     *  taken
     * 
     * Calls stopIndexing with synchronous semantics.
     * 
    * All non-const parameters will be filled with the returned values.
     * The CallStatus will be filled when the method returns and indicate either
     * "SUCCESS" or which type of error has occurred. In case of an error, ONLY the CallStatus
     * will be set.
     */
    virtual void stopIndexing(CommonAPI::CallStatus& callStatus, Indexer::IndexerError& e);
    /**
     * Calls stopIndexing with asynchronous semantics.
     * 
     * The provided callback will be called when the reply to this call arrives or
     * an error occurs during the call. The CallStatus will indicate either "SUCCESS"
     * or which type of error has occurred. In case of any error, ONLY the CallStatus
     * will have a defined value.
     * The std::future returned by this method will be fulfilled at arrival of the reply.
     * It will provide the same value for CallStatus as will be handed to the callback.
     */
    virtual std::future<CommonAPI::CallStatus> stopIndexingAsync(StopIndexingAsyncCallback callback);
    /**
     * If indexer is currently STOPPED (see IndexerStatus),
                         
     *  status is changed to RUNNING and indexing is RUNNING. If
                         
     *  the status is IDLE or RUNNING, no action is taken.
                          Note
     *  that the status may go from RUNNING to IDLE directly
                         
     *  after issuing this call, if no files are to be indexed
     * 
     * Calls startIndexing with synchronous semantics.
     * 
    * All non-const parameters will be filled with the returned values.
     * The CallStatus will be filled when the method returns and indicate either
     * "SUCCESS" or which type of error has occurred. In case of an error, ONLY the CallStatus
     * will be set.
     */
    virtual void startIndexing(CommonAPI::CallStatus& callStatus, Indexer::IndexerError& e);
    /**
     * Calls startIndexing with asynchronous semantics.
     * 
     * The provided callback will be called when the reply to this call arrives or
     * an error occurs during the call. The CallStatus will indicate either "SUCCESS"
     * or which type of error has occurred. In case of any error, ONLY the CallStatus
     * will have a defined value.
     * The std::future returned by this method will be fulfilled at arrival of the reply.
     * It will provide the same value for CallStatus as will be handed to the callback.
     */
    virtual std::future<CommonAPI::CallStatus> startIndexingAsync(StartIndexingAsyncCallback callback);


    /**
     * Returns the CommonAPI address of the remote partner this proxy communicates with.
     */
    virtual std::string getAddress() const;

    /**
     * Returns the domain of the remote partner this proxy communicates with.
     */
    virtual const std::string& getDomain() const;

    /** 
     * Returns the service ID of the remote partner this proxy communicates with.
     */
    virtual const std::string& getServiceId() const;

    /**
     * Returns the instance ID of the remote partner this proxy communicates with.
     */
    virtual const std::string& getInstanceId() const;

    /**
     * Returns true if the remote partner for this proxy is currently known to be available.
     */
    virtual bool isAvailable() const;

    /**
     * Returns true if the remote partner for this proxy is available.
     */
    virtual bool isAvailableBlocking() const;

    /**
     * Returns the wrapper class that is used to (de-)register for notifications about
     * the availability of the remote partner of this proxy.
     */
    virtual CommonAPI::ProxyStatusEvent& getProxyStatusEvent();

    /**
     * Returns the wrapper class that is used to access version information of the remote
     * partner of this proxy.
     */
    virtual CommonAPI::InterfaceVersionAttribute& getInterfaceVersionAttribute();

 private:
    std::shared_ptr<IndexerProxyBase> delegate_;
};

#ifdef WIN32
    typedef IndexerProxy<CommonAPI::WINDummyAttributeExtension<CommonAPI::WINDummyAttribute>> IndexerProxyDefault;
#else
    typedef IndexerProxy<> IndexerProxyDefault;
#endif

namespace IndexerExtensions {
    /**
     * Get the current status of the indexer.
     */
    template <template <typename > class _ExtensionType>
    class IndexerStatusAttributeExtension {
     public:
        typedef _ExtensionType<IndexerProxyBase::IndexerStatusAttribute> extension_type;
    
        static_assert(std::is_base_of<typename CommonAPI::AttributeExtension<IndexerProxyBase::IndexerStatusAttribute>, extension_type>::value,
                      "Not CommonAPI Attribute Extension!");
    #ifdef WIN32
        IndexerStatusAttributeExtension() {}
    #endif
    
        IndexerStatusAttributeExtension(IndexerProxyBase& proxy): attributeExtension_(proxy.getIndexerStatusAttribute()) {
        }
    
        inline extension_type& getIndexerStatusAttributeExtension() {
            return attributeExtension_;
        }
    
     private:
        extension_type attributeExtension_;
    };

} // namespace IndexerExtensions

//
// IndexerProxy Implementation
//
template <typename ... _AttributeExtensions>
IndexerProxy<_AttributeExtensions...>::IndexerProxy(std::shared_ptr<CommonAPI::Proxy> delegate):
        _AttributeExtensions(*(std::dynamic_pointer_cast<IndexerProxyBase>(delegate)))...,
        delegate_(std::dynamic_pointer_cast<IndexerProxyBase>(delegate)) {
}

template <typename ... _AttributeExtensions>
IndexerProxy<_AttributeExtensions...>::~IndexerProxy() {
}

/**
 * Get the path to the database file in the host file system.
                    
 *   This is the database file used by LMS to store metadata
 * @param output: Path to database file in host file system
 * @deprecated This is only used for testing purposes and will be removed
 */
template <typename ... _AttributeExtensions>
COMMONAPI_DEPRECATED void IndexerProxy<_AttributeExtensions...>::getDatabasePath(CommonAPI::CallStatus& callStatus, std::string& output, Indexer::IndexerError& e) {
    delegate_->getDatabasePath(callStatus, output, e);
}

template <typename ... _AttributeExtensions>
std::future<CommonAPI::CallStatus> IndexerProxy<_AttributeExtensions...>::getDatabasePathAsync(GetDatabasePathAsyncCallback callback) {
    return delegate_->getDatabasePathAsync(callback);
}
/**
 * If the indexer is currently IDLE or RUNNING
                      (see
 *  IndexerStatus), stop indexing and set IndexerStatus
                      to
 *  STOPPED.
                      If indexer is currently STOPPED, no action is
 *  taken
 */
template <typename ... _AttributeExtensions>
void IndexerProxy<_AttributeExtensions...>::stopIndexing(CommonAPI::CallStatus& callStatus, Indexer::IndexerError& e) {
    delegate_->stopIndexing(callStatus, e);
}

template <typename ... _AttributeExtensions>
std::future<CommonAPI::CallStatus> IndexerProxy<_AttributeExtensions...>::stopIndexingAsync(StopIndexingAsyncCallback callback) {
    return delegate_->stopIndexingAsync(callback);
}
/**
 * If indexer is currently STOPPED (see IndexerStatus),
                     
 *  status is changed to RUNNING and indexing is RUNNING. If
                     
 *  the status is IDLE or RUNNING, no action is taken.
                      Note
 *  that the status may go from RUNNING to IDLE directly
                     
 *  after issuing this call, if no files are to be indexed
 */
template <typename ... _AttributeExtensions>
void IndexerProxy<_AttributeExtensions...>::startIndexing(CommonAPI::CallStatus& callStatus, Indexer::IndexerError& e) {
    delegate_->startIndexing(callStatus, e);
}

template <typename ... _AttributeExtensions>
std::future<CommonAPI::CallStatus> IndexerProxy<_AttributeExtensions...>::startIndexingAsync(StartIndexingAsyncCallback callback) {
    return delegate_->startIndexingAsync(callback);
}

template <typename ... _AttributeExtensions>
std::string IndexerProxy<_AttributeExtensions...>::getAddress() const {
    return delegate_->getAddress();
}

template <typename ... _AttributeExtensions>
const std::string& IndexerProxy<_AttributeExtensions...>::getDomain() const {
    return delegate_->getDomain();
}

template <typename ... _AttributeExtensions>
const std::string& IndexerProxy<_AttributeExtensions...>::getServiceId() const {
    return delegate_->getServiceId();
}

template <typename ... _AttributeExtensions>
const std::string& IndexerProxy<_AttributeExtensions...>::getInstanceId() const {
    return delegate_->getInstanceId();
}

template <typename ... _AttributeExtensions>
bool IndexerProxy<_AttributeExtensions...>::isAvailable() const {
    return delegate_->isAvailable();
}

template <typename ... _AttributeExtensions>
bool IndexerProxy<_AttributeExtensions...>::isAvailableBlocking() const {
    return delegate_->isAvailableBlocking();
}

template <typename ... _AttributeExtensions>
CommonAPI::ProxyStatusEvent& IndexerProxy<_AttributeExtensions...>::getProxyStatusEvent() {
    return delegate_->getProxyStatusEvent();
}

template <typename ... _AttributeExtensions>
CommonAPI::InterfaceVersionAttribute& IndexerProxy<_AttributeExtensions...>::getInterfaceVersionAttribute() {
    return delegate_->getInterfaceVersionAttribute();
}


} // namespace mediamanager
} // namespace genivi
} // namespace org

namespace CommonAPI {
template<template<typename > class _AttributeExtension>
struct DefaultAttributeProxyFactoryHelper<org::genivi::mediamanager::IndexerProxy,
    _AttributeExtension> {
    typedef typename org::genivi::mediamanager::IndexerProxy<
            org::genivi::mediamanager::IndexerExtensions::IndexerStatusAttributeExtension<_AttributeExtension>
    > class_t;
};
}

#endif // ORG_GENIVI_MEDIAMANAGER_Indexer_PROXY_H_