/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:51 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenReaderOutput/ScreenReaderOutput-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface SCROConnection : NSObject <NSSecureCoding> {

	unsigned _pingPort;
	CFRunLoopSourceRef _pingSource;
	CFRunLoopSourceRef _invalidationSource;
	unsigned _identifier;
	int _handlerType;
	id _delegate;
	AB _isConnectionStarted;

}
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(void)_createConnectionRunLoop;
+(void)_configServer;
+(void)_configServerWithMachServiceName:(char*)arg1 ;
+(void)_unconfigServerAndRetry:(BOOL)arg1 ;
+(BOOL)_inUnitTests;
+(void)_addConnectionToRunLoop:(id)arg1 ;
-(void)invalidate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(int)sendEvent:(id)arg1 ;
-(void)_startConnection;
-(void)_ping;
-(void)_stopConnection;
-(id)handlerValueForKey:(int)arg1 ;
-(id)initWithHandlerType:(int)arg1 delegate:(id)arg2 ;
-(int)registerHandlerCallbackForKey:(int)arg1 ;
-(int)setHandlerValue:(id)arg1 forKey:(int)arg2 ;
-(id)handlerArrayValueForKey:(int)arg1 ;
-(int)performHandlerActionForKey:(int)arg1 ;
-(id)handlerValueForKey:(int)arg1 withObject:(id)arg2 ;
@end

