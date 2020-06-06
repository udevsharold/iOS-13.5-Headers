/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:50 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContentKit/WFEvent.h>

@class NSString;

@interface WFRunActionEvent : WFEvent {

	BOOL _completed;
	int _source;
	NSString* _key;
	NSString* _runSource;
	NSString* _actionIdentifier;
	NSString* _automationType;

}

@property (nonatomic,copy) NSString * key;                           //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) int source;                             //@synthesize source=_source - In the implementation block
@property (nonatomic,copy) NSString * runSource;                     //@synthesize runSource=_runSource - In the implementation block
@property (nonatomic,copy) NSString * actionIdentifier;              //@synthesize actionIdentifier=_actionIdentifier - In the implementation block
@property (assign,nonatomic) BOOL completed;                         //@synthesize completed=_completed - In the implementation block
@property (nonatomic,copy) NSString * automationType;                //@synthesize automationType=_automationType - In the implementation block
+(Class)codableEventClass;
-(NSString *)key;
-(void)setSource:(int)arg1 ;
-(int)source;
-(void)setKey:(NSString *)arg1 ;
-(BOOL)completed;
-(void)setCompleted:(BOOL)arg1 ;
-(NSString *)actionIdentifier;
-(void)setActionIdentifier:(NSString *)arg1 ;
-(NSString *)automationType;
-(void)setAutomationType:(NSString *)arg1 ;
-(NSString *)runSource;
-(void)setRunSource:(NSString *)arg1 ;
@end

