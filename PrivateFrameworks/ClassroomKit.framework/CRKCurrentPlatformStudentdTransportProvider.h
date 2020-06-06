/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:20 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CRKTransportProviding.h>

@protocol CRKTransportProviding;
@class NSString;

@interface CRKCurrentPlatformStudentdTransportProvider : NSObject <CRKTransportProviding> {

	id<CRKTransportProviding> mBaseProvider;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)fetchTransportWithCompletion:(/*^block*/id)arg1 ;
-(id)makeProviderForCurrentPlatform;
@end

