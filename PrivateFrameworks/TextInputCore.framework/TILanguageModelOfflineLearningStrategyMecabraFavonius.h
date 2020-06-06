/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TILanguageModelOfflineLearningStrategy.h>

@class TILanguageModelOfflineLearningTask, NSString;

@interface TILanguageModelOfflineLearningStrategyMecabraFavonius : NSObject <TILanguageModelOfflineLearningStrategy> {

	TILanguageModelOfflineLearningTask* _learningTask;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) TILanguageModelOfflineLearningTask * learningTask;              //@synthesize learningTask=_learningTask - In the implementation block
-(id)initWithClientIdentifier:(id)arg1 ;
-(TILanguageModelOfflineLearningTask *)learningTask;
-(BOOL)learnMessages:(id)arg1 withRecipientRecords:(id)arg2 ;
-(id)filterMessages:(id)arg1 ;
-(void)didFinishLearning;
-(BOOL)incrementUsageCountsForMessages:(id)arg1 withAdaptationContext:(id)arg2 ;
-(id)identifyLanguagesForMessages:(id)arg1 ;
@end

