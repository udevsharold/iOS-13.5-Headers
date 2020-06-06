/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:11 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@interface CKDFetchWhitelistedBundleIDsURLRequest : CKDURLRequest {

	/*^block*/id _bundleIDsFetchedBlock;

}

@property (nonatomic,copy) id bundleIDsFetchedBlock;              //@synthesize bundleIDsFetchedBlock=_bundleIDsFetchedBlock - In the implementation block
-(int)operationType;
-(id)sourceApplicationBundleIdentifier;
-(id)generateRequestOperations;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(void)requestDidParseNodeFailure:(id)arg1 ;
-(id)requestOperationClasses;
-(BOOL)requiresTokenRegistration;
-(void)setBundleIDsFetchedBlock:(id)arg1 ;
-(id)bundleIDsFetchedBlock;
@end

