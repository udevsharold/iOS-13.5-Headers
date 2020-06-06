/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:34 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVFigRoutingContextOutputDeviceTranslator.h>

@class NSString;

@interface AVFigRouteDescriptorFigRoutingContextOutputDeviceTranslator : NSObject <AVFigRoutingContextOutputDeviceTranslator> {

	BOOL _useRouteConfigUpdatedNotification;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedOutputDeviceTranslator;
-(id)init;
-(id)outputDeviceFromRoutingContext:(OpaqueFigRoutingContextRef)arg1 ;
-(void)setOutputDevice:(id)arg1 withOptions:(CFDictionaryRef)arg2 onRoutingContext:(OpaqueFigRoutingContextRef)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)outputDevicesFromRoutingContext:(OpaqueFigRoutingContextRef)arg1 ;
-(void)setOutputDevices:(id)arg1 withOptions:(CFDictionaryRef)arg2 onRoutingContext:(OpaqueFigRoutingContextRef)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)addOutputDevice:(id)arg1 withOptions:(CFDictionaryRef)arg2 toRoutingContext:(OpaqueFigRoutingContextRef)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)removeOutputDevice:(id)arg1 withOptions:(const CFDictionaryRef)arg2 fromRoutingContext:(OpaqueFigRoutingContextRef)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)initForUsingRouteConfigUpdatedNotification:(BOOL)arg1 ;
@end

