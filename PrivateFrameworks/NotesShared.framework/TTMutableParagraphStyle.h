/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:29 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesShared/NotesShared-Structs.h>
#import <ReminderKit/TTParagraphStyle.h>

@interface TTMutableParagraphStyle : TTParagraphStyle

@property (assign,nonatomic) unsigned style; 
@property (assign,nonatomic) unsigned long long alignment; 
@property (assign,nonatomic) long long writingDirection; 
@property (assign,nonatomic) unsigned long long indent; 
@property (assign,nonatomic) unsigned long long startingItemNumber; 
@property (assign,nonatomic) unsigned hints; 
@property (assign,nonatomic) BOOL needsParagraphCleanup; 
@property (assign,nonatomic) BOOL needsListCleanup; 
+(id)paragraphStyleNamed:(unsigned)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

