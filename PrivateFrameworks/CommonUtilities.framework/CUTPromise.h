/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:36 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CommonUtilities/CUTUnsafePromise.h>

@interface CUTPromise : CUTUnsafePromise
+(id)failedPromiseWithError:(id)arg1 ;
+(id)fulfilledPromiseWithValue:(id)arg1 ;
+(id)all:(id)arg1 ;
-(void)registerResultBlock:(/*^block*/id)arg1 ;
-(id)then:(/*^block*/id)arg1 ;
@end

