/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreServicesStore.framework/CoreServicesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreServicesStore/CoreServicesStore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface _CSStore : NSObject <NSSecureCoding> {

	Store* _store;
	NSObject*<OS_dispatch_queue> _accessQueue;

}
+(void)initialize;
+(id)new;
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithContentsOfURL:(id)arg1 error:(id*)arg2 ;
-(id)initByMovingStore:(Store*)arg1 ;
-(id)initWithError:(id*)arg1 ;
-(void)setExpectedAccessQueue:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 error:(id*)arg2 ;
@end

