/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:32 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInputCore/TILanguageModelOfflineLearningTask.h>

@protocol TILinguisticDataSource;
@class NSCharacterSet, NSSet;

@interface TILanguageModelOfflineLearningTaskMail : TILanguageModelOfflineLearningTask {

	NSCharacterSet* _linePaddingCharacters;
	NSSet* _forwardedMessageSeparators;
	id<TILinguisticDataSource> _dataSource;

}
+(id)dataSourceForTask;
-(id)dataSource;
-(id)initWithClientIdentifier:(id)arg1 oneTimeTask:(BOOL)arg2 ;
-(id)linePaddingCharacters;
-(id)forwardedMessageSeparators;
@end

