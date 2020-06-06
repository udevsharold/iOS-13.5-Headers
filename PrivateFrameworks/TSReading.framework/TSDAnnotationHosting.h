/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:49 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class TSKAnnotationAuthor, NSDate, NSString, TSDCommentStorage;


@protocol TSDAnnotationHosting <NSObject,TSKAnnotation>
@property (nonatomic,retain) TSKAnnotationAuthor * author; 
@property (nonatomic,readonly) NSDate * date; 
@property (assign,nonatomic) id<TSKModel> model; 
@property (nonatomic,readonly) NSString * changeTrackingString; 
@property (nonatomic,copy) TSDCommentStorage * storage; 
@optional
-(TSDCommentStorage *)storage;
-(void)setStorage:(id)arg1;
-(NSString *)changeTrackingString;
-(id)commandForDeletingComment;

@required
-(BOOL)isEqual:(id)arg1;
-(NSDate *)date;
-(id<TSKModel>)model;
-(void)setModel:(id)arg1;
-(TSKAnnotationAuthor *)author;
-(void)setAuthor:(id)arg1;
-(void)commitText:(id)arg1;

@end

