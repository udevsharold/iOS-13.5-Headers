/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TouchRemote/TROperation.h>

@interface TRCompletionOperation : TROperation {

	BOOL _success;
	long long _errorCode;

}

@property (assign,nonatomic) BOOL success;                     //@synthesize success=_success - In the implementation block
@property (assign,nonatomic) long long errorCode;              //@synthesize errorCode=_errorCode - In the implementation block
-(void)execute;
-(BOOL)success;
-(void)setSuccess:(BOOL)arg1 ;
-(long long)errorCode;
-(void)setErrorCode:(long long)arg1 ;
@end

