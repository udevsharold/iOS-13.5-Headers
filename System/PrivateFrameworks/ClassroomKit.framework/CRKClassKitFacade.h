/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol CRKClassKitFacade <NSObject>
@property (getter=isEligibleAccountSignedIn,nonatomic,readonly) BOOL eligibleAccountSignedIn; 
@property (nonatomic,copy,readonly) NSString * currentUserDidChangeNotificationName; 
@property (nonatomic,copy,readonly) NSString * currentUserInfoKey; 
@property (nonatomic,copy,readonly) NSString * studentClassMembershipChangeDarwinNotificationName; 
@required
-(void)executeQuery:(id)arg1;
-(void)currentUserWithCompletion:(/*^block*/id)arg1;
-(void)registerDataObserver:(id)arg1;
-(void)deregisterDataObserver:(id)arg1;
-(void)instructedClassesWithCompletion:(/*^block*/id)arg1;
-(void)saveClass:(id)arg1 completion:(/*^block*/id)arg2;
-(void)enrolledClassesWithCompletion:(/*^block*/id)arg1;
-(BOOL)isEligibleAccountSignedIn;
-(id)instructorObserverWithSortDescriptors:(id)arg1;
-(void)instructorsInClassWithObjectID:(id)arg1 completion:(/*^block*/id)arg2;
-(id)studentObserverWithSortDescriptors:(id)arg1;
-(void)studentsInClassWithObjectID:(id)arg1 completion:(/*^block*/id)arg2;
-(id)classDataObserverWithSortDescriptors:(id)arg1;
-(void)removeClass:(id)arg1 completion:(/*^block*/id)arg2;
-(id)makeClassWithLocationID:(id)arg1 name:(id)arg2;
-(void)addStudent:(id)arg1 toClass:(id)arg2;
-(void)removeStudent:(id)arg1 fromClass:(id)arg2;
-(id)objectIDsOfStudentsInClass:(id)arg1;
-(void)addInstructor:(id)arg1 toClass:(id)arg2;
-(void)removeInstructor:(id)arg1 fromClass:(id)arg2;
-(id)objectIDsOfInstructorsInClass:(id)arg1;
-(id)currentUserDataObserverWithSortDescriptors:(id)arg1;
-(id)locationsObserverWithSortDescriptors:(id)arg1;
-(void)locationsWithManagePermissionsForUserWithObjectID:(id)arg1 completion:(/*^block*/id)arg2;
-(void)locationsWithObjectIDs:(id)arg1 completion:(/*^block*/id)arg2;
-(id)makeStudentQueryForSearchString:(id)arg1 sortingGivenNameFirst:(BOOL)arg2 pageSize:(long long)arg3;
-(id)makeInstructorQueryForSearchString:(id)arg1 sortingGivenNameFirst:(BOOL)arg2 pageSize:(long long)arg3;
-(NSString *)currentUserDidChangeNotificationName;
-(NSString *)currentUserInfoKey;
-(NSString *)studentClassMembershipChangeDarwinNotificationName;

@end
