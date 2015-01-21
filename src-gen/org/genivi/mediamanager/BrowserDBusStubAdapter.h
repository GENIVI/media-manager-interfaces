/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core Unknown.
* Used org.franca.core Unknown.
*
* 
*/
#ifndef ORG_GENIVI_MEDIAMANAGER_Browser_DBUS_STUB_ADAPTER_H_
#define ORG_GENIVI_MEDIAMANAGER_Browser_DBUS_STUB_ADAPTER_H_

#include <org/genivi/mediamanager/BrowserStub.h>

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/DBus/DBusStubAdapterHelper.h>
#include <CommonAPI/DBus/DBusStubAdapter.h>
#include <CommonAPI/DBus/DBusFactory.h>
#include <CommonAPI/DBus/DBusServicePublisher.h>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace org {
namespace genivi {
namespace mediamanager {

typedef CommonAPI::DBus::DBusStubAdapterHelper<BrowserStub> BrowserDBusStubAdapterHelper;

class BrowserDBusStubAdapterInternal: public virtual BrowserStubAdapter, public BrowserDBusStubAdapterHelper {
 public:
    BrowserDBusStubAdapterInternal(
            const std::shared_ptr<CommonAPI::DBus::DBusFactory>& factory,
            const std::string& commonApiAddress,
            const std::string& dbusInterfaceName,
            const std::string& dbusBusName,
            const std::string& dbusObjectPath,
            const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection>& dbusConnection,
            const std::shared_ptr<CommonAPI::StubBase>& stub);

    ~BrowserDBusStubAdapterInternal();

    virtual const bool hasFreedesktopProperties();




    const BrowserDBusStubAdapterHelper::StubDispatcherTable& getStubDispatcherTable();
    const CommonAPI::DBus::StubAttributeTable& getStubAttributeTable();

    void deactivateManagedInstances();


static CommonAPI::DBus::DBusGetAttributeStubDispatcher<
        BrowserStub,
        CommonAPI::Version
        > getBrowserInterfaceVersionStubDispatcher;



/**
 * Return a list of all media manager identifiers. These are
         used to
 *  indicate which media manager we should interact with.
         returns: A list
 *  of all media managers found
 */
static CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    BrowserStub,
    std::tuple<>,
    std::tuple<std::vector<std::string>, BrowserTypes::BrowserError>
    > discoverMediaManagersStubDispatcher;
/**
 * List all containers below the given path.
         returns: A JSON list of all
 *  containers with the given path as parent
         errors: NO_CONNECTION if no
 *  connection can be established to underlying
                  browsing engine

 *                   BAD_PATH if path parameter is invalid
 * @param path The path to search for containers. The format of the path
               
 *  depends on the underlying browsing backend
 * @param offset: The offset to use for indexing the results list
 * @param count: The number of results to return, starting from offset
 * @param filter: Array of keys to include in resulting JSON elements
 */
static CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    BrowserStub,
    std::tuple<std::string, uint64_t, uint64_t, std::vector<std::string>>,
    std::tuple<std::string, BrowserTypes::BrowserError>
    > listContainersStubDispatcher;
/**
 * Extends ListContainers with sorting capabilities
 * @param sortKey Key to sort JSON result list on
 */
static CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    BrowserStub,
    std::tuple<std::string, uint64_t, uint64_t, std::vector<std::string>, BrowserTypes::SortKey>,
    std::tuple<std::string, BrowserTypes::BrowserError>
    > listContainersExStubDispatcher;
/**
 * List all items in the given container
         returns: A JSON list of all
 *  items with the given container as parent
         errors: NO_CONNECTION if no
 *  connection can be established to underlying
                  browsing engine

 *                   BAD_PATH if path parameter is invalid
 * @param path The path of the container to search for items.
                The format
 *  of the path depends on the underlying browsing
                backend
 * @param offset: The offset to use for indexing the results list
 * @param count: The number of results to return, starting from offset
 * @param filter: Array of keys to include in resulting JSON elements
 */
static CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    BrowserStub,
    std::tuple<std::string, uint64_t, uint64_t, std::vector<std::string>>,
    std::tuple<std::string, BrowserTypes::BrowserError>
    > listItemsStubDispatcher;
/**
 * Extends ListItems with sorting capabilities
 * @param sortKey Key to sort JSON result list on
 */
static CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    BrowserStub,
    std::tuple<std::string, uint64_t, uint64_t, std::vector<std::string>, BrowserTypes::SortKey>,
    std::tuple<std::string, BrowserTypes::BrowserError>
    > listItemsExStubDispatcher;
/**
 * List all children in the given container
         returns: A JSON list of all
 *  children with the given container as parent
         errors: NO_CONNECTION if
 *  no connection can be established to underlying
                  browsing
 *  engine
                  BAD_PATH if path parameter is invalid
 * @param path The path of the container to search for children.
                The
 *  format of the path depends on the underlying browsing
                backend
 * @param offset: The offset to use for indexing the results list
 * @param count: The number of results to return, starting from offset
 * @param filter: Array of keys to include in resulting JSON elements
 */
static CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    BrowserStub,
    std::tuple<std::string, uint64_t, uint64_t, std::vector<std::string>>,
    std::tuple<std::string, BrowserTypes::BrowserError>
    > listChildrenStubDispatcher;
/**
 * Extends ListChildren with sorting capabilities
 * @param sortKey Key to sort JSON result list on
 */
static CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    BrowserStub,
    std::tuple<std::string, uint64_t, uint64_t, std::vector<std::string>, BrowserTypes::SortKey>,
    std::tuple<std::string, BrowserTypes::BrowserError>
    > listChildrenExStubDispatcher;
/**
 * Search for children in the given container
         returns: A JSON list of all
 *  children matching the search criteria with
                   the given
 *  container as parent
         errors: NO_CONNECTION if no connection can be
 *  established to underlying
                  browsing engine
                 
 *  BAD_PATH if path parameter is invalid
 * @param path The path of the container to search for children.
                The
 *  format of the path depends on the underlying browsing
                backend
 * @param query Search query to match children against. The format of the
               
 *  query depends on the underlying browsing backend
 * @param offset: The offset to use for indexing the results list
 * @param count: The number of results to return, starting from offset
 * @param filter: Array of keys to include in resulting JSON elements
 */
static CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    BrowserStub,
    std::tuple<std::string, std::string, uint64_t, uint64_t, std::vector<std::string>>,
    std::tuple<std::string, BrowserTypes::BrowserError>
    > searchObjectsStubDispatcher;
/**
 * Extends SearchObjects with sorting capabilities
 * @param sortKey Key to sort JSON result list on
 */
static CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    BrowserStub,
    std::tuple<std::string, std::string, uint64_t, uint64_t, std::vector<std::string>, BrowserTypes::SortKey>,
    std::tuple<std::string, BrowserTypes::BrowserError>
    > searchObjectsExStubDispatcher;
/**
 * Get a list of all initial letters and their index in the
                     
 *  given container
         returns: A JSON list of tuples of initial letters and
 *  their first
                   observed position when sorting according to
 *  sortKey
         errors: NO_CONNECTION if no connection can be established to
 *  underlying
                  browsing engine
                  BAD_PATH if
 *  path parameter is invalid
 * @param container: Container to build index list for
 * @param count: How many (unsorted) items should be traversed to build
                 
 *         index
 * @param filter: List of initial letters to include
 * @param sortKey: Key to sort on when building index list
 */
static CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    BrowserStub,
    std::tuple<std::string, uint64_t, std::vector<std::string>, BrowserTypes::SortKey>,
    std::tuple<std::string, BrowserTypes::BrowserError>
    > listIndexesStubDispatcher;
/**
 * Create a new empty container with path used as root
         returns: Path
 *  identifier for the newly created container
         errors: NO_CONNECTION if
 *  no connection can be established to underlying
                  browsing
 *  engine
                  BAD_PATH if path parameter is invalid
 * @param path: Path to place the newly created container in
 * @param displayName: Display name for the new container
 * @param childTypes: Array of allowed types on children in new container
 */
static CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    BrowserStub,
    std::tuple<std::string, std::string, std::vector<std::string>>,
    std::tuple<std::string, BrowserTypes::BrowserError>
    > createContainerStubDispatcher;
/**
 * Place a reference in a container, pointing to an object
         returns: Path
 *  identifier for the container containing the reference
         errors:
 *  NO_CONNECTION if no connection can be established to underlying
              
 *     browsing engine
                  BAD_PATH if path parameter is invalid
 * @param path: Path to place the newly created container in
 * @param objectPath: Path to object to create reference to
 */
static CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    BrowserStub,
    std::tuple<std::string, std::string>,
    std::tuple<std::string, BrowserTypes::BrowserError>
    > createReferenceStubDispatcher;




 protected:
    virtual const char* getMethodsDBusIntrospectionXmlData() const;

 private:
    BrowserDBusStubAdapterHelper::StubDispatcherTable stubDispatcherTable_;
    CommonAPI::DBus::StubAttributeTable stubAttributeTable_;
};

class BrowserDBusStubAdapter: public BrowserDBusStubAdapterInternal, public std::enable_shared_from_this<BrowserDBusStubAdapter> {
public:
    BrowserDBusStubAdapter(
                         const std::shared_ptr<CommonAPI::DBus::DBusFactory>& factory,
                         const std::string& commonApiAddress,
                         const std::string& dbusInterfaceName,
                         const std::string& dbusBusName,
                         const std::string& dbusObjectPath,
                         const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection>& dbusConnection,
                         const std::shared_ptr<CommonAPI::StubBase>& stub) :
            CommonAPI::DBus::DBusStubAdapter(
                            factory,
                            commonApiAddress,
                            dbusInterfaceName,
                            dbusBusName,
                            dbusObjectPath,
                            dbusConnection,
                            false),
            BrowserDBusStubAdapterInternal(
                            factory,
                            commonApiAddress,
                            dbusInterfaceName,
                            dbusBusName,
                            dbusObjectPath,
                            dbusConnection,
                            stub) { }
};

} // namespace mediamanager
} // namespace genivi
} // namespace org

#endif // ORG_GENIVI_MEDIAMANAGER_Browser_DBUS_STUB_ADAPTER_H_