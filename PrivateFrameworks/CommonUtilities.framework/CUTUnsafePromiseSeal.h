/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:36 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CUTUnsafePromise;

@interface CUTUnsafePromiseSeal : NSObject {

	CUTUnsafePromise* _promise;

}

@property (nonatomic,retain) CUTUnsafePromise * promise;              //@synthesize promise=_promise - In the implementation block
-(id)init;
-(void)failWithError:(id)arg1 ;
-(CUTUnsafePromise *)promise;
-(void)fulfillWithValue:(id)arg1 ;
-(void)setPromise:(CUTUnsafePromise *)arg1 ;
@end

