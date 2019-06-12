//
//  AppDelegate.h
//  TestJenkinsDemo
//
//  Created by 门超 on 2019/6/12.
//  Copyright © 2019 BGY. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

