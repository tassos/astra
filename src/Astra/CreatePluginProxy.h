/* THIS FILE AUTO-GENERATED FROM CreatePluginProxy.h.lpp. DO NOT EDIT. */
#ifndef CREATEPLUGINPROXY_H
#define CREATEPLUGINPROXY_H

#include "PluginService.h"
#include "PluginServiceDelegate.h"
#include <Astra/Plugins/PluginServiceProxyBase.h>

namespace astra {
PluginServiceProxyBase* create_plugin_proxy(PluginService* service)
    {
        PluginServiceProxyBase* proxy = new PluginServiceProxyBase;

        proxy->register_stream_registered_callback = &PluginServiceDelegate::register_stream_registered_callback;
        proxy->register_stream_unregistering_callback = &PluginServiceDelegate::register_stream_unregistering_callback;
        proxy->register_host_event_callback = &PluginServiceDelegate::register_host_event_callback;
        proxy->unregister_host_event_callback = &PluginServiceDelegate::unregister_host_event_callback;
        proxy->unregister_stream_registered_callback = &PluginServiceDelegate::unregister_stream_registered_callback;
        proxy->unregister_stream_unregistering_callback = &PluginServiceDelegate::unregister_stream_unregistering_callback;
        proxy->create_stream_set = &PluginServiceDelegate::create_stream_set;
        proxy->destroy_stream_set = &PluginServiceDelegate::destroy_stream_set;
        proxy->get_streamset_uri = &PluginServiceDelegate::get_streamset_uri;
        proxy->create_stream = &PluginServiceDelegate::create_stream;
        proxy->destroy_stream = &PluginServiceDelegate::destroy_stream;
        proxy->create_stream_bin = &PluginServiceDelegate::create_stream_bin;
        proxy->destroy_stream_bin = &PluginServiceDelegate::destroy_stream_bin;
        proxy->bin_has_connections = &PluginServiceDelegate::bin_has_connections;
        proxy->cycle_bin_buffers = &PluginServiceDelegate::cycle_bin_buffers;
        proxy->link_connection_to_bin = &PluginServiceDelegate::link_connection_to_bin;
        proxy->get_parameter_bin = &PluginServiceDelegate::get_parameter_bin;
        proxy->log = &PluginServiceDelegate::log;
        proxy->pluginService = service;

        return proxy;
    }
}

#endif /* CREATEPLUGINPROXY_H */