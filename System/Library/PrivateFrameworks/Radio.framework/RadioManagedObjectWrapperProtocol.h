/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:47 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSManagedObject, RadioModel;


@protocol RadioManagedObjectWrapperProtocol <NSObject>
@property (getter=isDatabaseBacked,nonatomic,readonly) BOOL databaseBacked; 
@property (nonatomic,readonly) NSManagedObject * managedObject; 
@property (nonatomic,readonly) RadioModel * model; 
@required
-(RadioModel *)model;
-(NSManagedObject *)managedObject;
-(BOOL)isDatabaseBacked;
-(id)initWithModel:(id)arg1 managedObject:(id)arg2;

@end

