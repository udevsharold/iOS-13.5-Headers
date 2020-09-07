/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:44 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <IOAccelerator/IOAccelMTLEvent.h>
#import <libobjc.A.dylib/MTLEvent.h>

@protocol MTLDevice;
@class NSString, MTLIOAccelDevice;

@interface _MTLIOAccelMTLEvent : IOAccelMTLEvent <MTLEvent> {

	MTLIOAccelDevice*<MTLDevice> _device;
	unsigned long long _labelTraceID;
	NSString* _label;
	os_unfair_lock_s _labelLock;

}

@property (readonly) id<MTLDevice> device;                          //@synthesize device=_device - In the implementation block
@property (copy) NSString * label; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<MTLDevice>)device;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(id)initWithDevice:(id)arg1 ;
-(id)retainedLabel;
@end
