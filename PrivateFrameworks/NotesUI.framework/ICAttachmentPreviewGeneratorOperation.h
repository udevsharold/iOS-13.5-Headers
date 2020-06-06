/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:34 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSManagedObjectID, NSManagedObjectContext, ICAttachmentModel;

@interface ICAttachmentPreviewGeneratorOperation : NSOperation {

	NSManagedObjectID* _attachmentID;
	NSManagedObjectContext* _managedObjectContext;
	ICAttachmentModel* _attachmentModel;

}

@property (retain) NSManagedObjectID * attachmentID;                           //@synthesize attachmentID=_attachmentID - In the implementation block
@property (retain) NSManagedObjectContext * managedObjectContext;              //@synthesize managedObjectContext=_managedObjectContext - In the implementation block
@property (retain) ICAttachmentModel * attachmentModel;                        //@synthesize attachmentModel=_attachmentModel - In the implementation block
@property (nonatomic,readonly) unsigned long long type; 
-(unsigned long long)type;
-(void)cancel;
-(void)main;
-(NSManagedObjectContext *)managedObjectContext;
-(void)setManagedObjectContext:(NSManagedObjectContext *)arg1 ;
-(NSManagedObjectID *)attachmentID;
-(void)setAttachmentID:(NSManagedObjectID *)arg1 ;
-(ICAttachmentModel *)attachmentModel;
-(void)setAttachmentModel:(ICAttachmentModel *)arg1 ;
-(id)initWithAttachmentManagedObjectID:(id)arg1 ;
@end

