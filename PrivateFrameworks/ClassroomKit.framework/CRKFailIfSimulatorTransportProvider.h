/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CRKTransportProviding.h>

@protocol CRKTransportProviding;
@class NSError, NSString;

@interface CRKFailIfSimulatorTransportProvider : NSObject <CRKTransportProviding> {

	id<CRKTransportProviding> _baseProvider;
	NSError* _failureError;

}

@property (nonatomic,readonly) id<CRKTransportProviding> baseProvider;              //@synthesize baseProvider=_baseProvider - In the implementation block
@property (nonatomic,readonly) NSError * failureError;                              //@synthesize failureError=_failureError - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSError *)failureError;
-(id)initWithTransportProvider:(id)arg1 failureError:(id)arg2 ;
-(id<CRKTransportProviding>)baseProvider;
-(void)fetchTransportWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithTransportProvider:(id)arg1 ;
@end

