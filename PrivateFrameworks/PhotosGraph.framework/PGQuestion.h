/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:43 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSDictionary;


@protocol PGQuestion <NSObject>
@property (nonatomic,readonly) NSString * entityIdentifier; 
@property (nonatomic,readonly) unsigned short type; 
@property (nonatomic,readonly) unsigned short state; 
@property (nonatomic,readonly) unsigned short entityType; 
@property (nonatomic,readonly) unsigned short displayType; 
@property (nonatomic,readonly) double localFactoryScore; 
@property (assign,nonatomic) double score; 
@property (nonatomic,readonly) NSDictionary * additionalInfo; 
@required
-(unsigned short)type;
-(unsigned short)state;
-(void)remove;
-(double)score;
-(void)setScore:(double)arg1;
-(unsigned short)displayType;
-(NSDictionary *)additionalInfo;
-(NSString *)entityIdentifier;
-(unsigned short)entityType;
-(void)persistWithCreationDate:(id)arg1;
-(double)localFactoryScore;
-(BOOL)isEquivalentToPersistedQuestion:(id)arg1;

@end

