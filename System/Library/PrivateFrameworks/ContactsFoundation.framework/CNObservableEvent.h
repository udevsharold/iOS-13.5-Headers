/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:39 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSError;

@interface CNObservableEvent : NSObject

@property (nonatomic,readonly) unsigned long long eventType; 
@property (nonatomic,readonly) BOOL hasValue; 
@property (nonatomic,readonly) id value; 
@property (nonatomic,copy,readonly) NSError * error; 
+(id)eventWithResult:(id)arg1 ;
+(id)completionEvent;
+(id)failureEventWithError:(id)arg1 ;
-(NSError *)error;
-(id)value;
-(unsigned long long)eventType;
-(BOOL)hasValue;
-(void)dematerializeWithObserver:(id)arg1 ;
@end

