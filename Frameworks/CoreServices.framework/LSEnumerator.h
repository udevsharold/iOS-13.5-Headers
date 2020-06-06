/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:21 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreServices/CoreServices-Structs.h>
#import <CoreFoundation/NSEnumerator.h>

@interface LSEnumerator : NSEnumerator {

	atomic_flag _hasFiredErrorHandler;
	/*^block*/id _errorHandler;

}

@property (nonatomic,copy) id errorHandler;              //@synthesize errorHandler=_errorHandler - In the implementation block
+(id)new;
+(id)enumeratorForApplicationProxiesWithOptions:(unsigned long long)arg1 ;
+(id)enumeratorForApplicationProxiesOnVolume:(id)arg1 options:(unsigned long long)arg2 ;
+(id)enumeratorForPlugInKitProxiesWithOptions:(unsigned long long)arg1 ;
+(id)enumeratorForPlugInKitProxiesWithExtensionPoint:(id)arg1 options:(unsigned long long)arg2 ;
+(id)enumeratorForPlugInKitProxiesWithExtensionPoint:(id)arg1 options:(unsigned long long)arg2 filter:(/*^block*/id)arg3 ;
+(id)enumeratorForAllExtensionPoints;
+(id)_log;
-(id)init;
-(id)nextObject;
-(id)_init;
-(void)setErrorHandler:(id)arg1 ;
-(id)errorHandler;
-(void)_fireErrorHandlerWithError:(id)arg1 ;
@end

