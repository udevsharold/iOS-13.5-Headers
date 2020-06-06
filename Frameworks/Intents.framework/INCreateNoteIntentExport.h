/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:21 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class INSpeakableString, INNoteContent;


@protocol INCreateNoteIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INSpeakableString * title; 
@property (nonatomic,copy) INNoteContent * content; 
@property (nonatomic,copy) INSpeakableString * groupName; 
@required
-(id)init;
-(INSpeakableString *)title;
-(void)setTitle:(id)arg1;
-(INSpeakableString *)groupName;
-(void)setGroupName:(id)arg1;
-(INNoteContent *)content;
-(void)setContent:(id)arg1;

@end

