/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:52 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SSProtocolCondition : NSObject {

	long long _operator;
	id _value;

}
+(id)newConditionWithDictionary:(id)arg1 ;
-(void)dealloc;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)evaluateWithContext:(id)arg1 ;
@end

