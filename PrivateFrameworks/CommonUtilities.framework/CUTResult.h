/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:36 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSError;

@interface CUTResult : NSObject {

	long long _state;
	NSError* _inError;
	id _inValue;

}

@property (nonatomic,retain) NSError * inError;              //@synthesize inError=_inError - In the implementation block
@property (nonatomic,retain) id inValue;                     //@synthesize inValue=_inValue - In the implementation block
@property (nonatomic,readonly) long long state;              //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,readonly) id value; 
-(NSError *)error;
-(id)value;
-(long long)state;
-(id)initWithError:(id)arg1 ;
-(id)initWithSuccess:(id)arg1 ;
-(id)initWithState:(long long)arg1 value:(id)arg2 error:(id)arg3 ;
-(NSError *)inError;
-(void)setInError:(NSError *)arg1 ;
-(id)inValue;
-(void)setInValue:(id)arg1 ;
@end

