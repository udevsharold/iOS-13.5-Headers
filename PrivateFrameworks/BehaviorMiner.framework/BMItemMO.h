/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:12 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/BehaviorMiner.framework/BehaviorMiner
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSSet;

@interface BMItemMO : NSManagedObject

@property (nonatomic,copy) NSString * normalizedValue; 
@property (nonatomic,copy) NSString * typeIdentifier; 
@property (nonatomic,copy) NSString * uniformIdentifier; 
@property (nonatomic,retain) NSSet * antecedentOfRules; 
@property (nonatomic,retain) NSSet * consequentOfRules; 
+(id)fetchRequest;
@end

