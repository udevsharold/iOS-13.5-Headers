/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:26 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BiometricKit/BKMatchOperation.h>

@interface BKMatchTouchIDOperation : BKMatchOperation {

	BOOL _requireFingerOff;

}

@property (assign,nonatomic,__weak) id<BKMatchTouchIDOperationDelegate> delegate; 
@property (assign,nonatomic) BOOL requireFingerOff;                                            //@synthesize requireFingerOff=_requireFingerOff - In the implementation block
-(void)statusMessage:(unsigned)arg1 client:(unsigned long long)arg2 ;
-(id)optionsDictionaryWithError:(id*)arg1 ;
-(BOOL)requireFingerOff;
-(void)setRequireFingerOff:(BOOL)arg1 ;
@end

