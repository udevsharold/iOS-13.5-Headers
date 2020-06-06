/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:52 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContentKit/WFEvent.h>

@class NSString;

@interface WFSetupSuggestedAutomationEvent : WFEvent {

	BOOL _completed;
	unsigned _currentStep;
	NSString* _key;
	NSString* _suggestedAutomationIdentifier;

}

@property (nonatomic,copy) NSString * key;                                        //@synthesize key=_key - In the implementation block
@property (nonatomic,copy) NSString * suggestedAutomationIdentifier;              //@synthesize suggestedAutomationIdentifier=_suggestedAutomationIdentifier - In the implementation block
@property (assign,nonatomic) unsigned currentStep;                                //@synthesize currentStep=_currentStep - In the implementation block
@property (assign,nonatomic) BOOL completed;                                      //@synthesize completed=_completed - In the implementation block
+(Class)codableEventClass;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(BOOL)completed;
-(void)setCompleted:(BOOL)arg1 ;
-(unsigned)currentStep;
-(NSString *)suggestedAutomationIdentifier;
-(void)setSuggestedAutomationIdentifier:(NSString *)arg1 ;
-(void)setCurrentStep:(unsigned)arg1 ;
@end

