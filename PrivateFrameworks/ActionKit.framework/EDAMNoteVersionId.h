/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:39 PM Malaysia Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionKit/FATObject.h>

@class NSNumber, NSString;

@interface EDAMNoteVersionId : FATObject {

	NSNumber* _updateSequenceNum;
	NSNumber* _updated;
	NSNumber* _saved;
	NSString* _title;
	NSNumber* _lastEditorId;

}

@property (nonatomic,retain) NSNumber * updateSequenceNum;              //@synthesize updateSequenceNum=_updateSequenceNum - In the implementation block
@property (nonatomic,retain) NSNumber * updated;                        //@synthesize updated=_updated - In the implementation block
@property (nonatomic,retain) NSNumber * saved;                          //@synthesize saved=_saved - In the implementation block
@property (nonatomic,retain) NSString * title;                          //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSNumber * lastEditorId;                   //@synthesize lastEditorId=_lastEditorId - In the implementation block
+(id)structName;
+(id)structFields;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSNumber *)updated;
-(void)setUpdated:(NSNumber *)arg1 ;
-(void)setSaved:(NSNumber *)arg1 ;
-(NSNumber *)saved;
-(NSNumber *)updateSequenceNum;
-(void)setUpdateSequenceNum:(NSNumber *)arg1 ;
-(NSNumber *)lastEditorId;
-(void)setLastEditorId:(NSNumber *)arg1 ;
@end

