/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:50 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSManagedObjectID, NSManagedObjectContext;

@interface PLTransientOrderKey : NSObject {

	long long _orderValue;
	NSManagedObjectID* _objectID;
	NSManagedObjectContext* _moc;

}

@property (nonatomic,retain) NSManagedObjectContext * moc;              //@synthesize moc=_moc - In the implementation block
@property (assign,nonatomic) long long orderValue;                      //@synthesize orderValue=_orderValue - In the implementation block
@property (nonatomic,retain) NSManagedObjectID * objectID;              //@synthesize objectID=_objectID - In the implementation block
-(id)description;
-(NSManagedObjectID *)objectID;
-(void)setObjectID:(NSManagedObjectID *)arg1 ;
-(NSManagedObjectContext *)moc;
-(id)childManagedObject;
-(id)secondaryOrderSortKey;
-(long long)orderValue;
-(void)setOrderValue:(long long)arg1 ;
-(void)setMoc:(NSManagedObjectContext *)arg1 ;
@end

